#include <gtk/gtk.h>
#include <math.h>
#include <string.h>
#include <stdlib.h>

GtkWidget *entry;

void on_button_clicked(GtkWidget *widget, gpointer data) {
    const char *label = gtk_button_get_label(GTK_BUTTON(widget));
    const char *current = gtk_entry_get_text(GTK_ENTRY(entry));

    // Handle "C" (Clear)
    if (strcmp(label, "C") == 0) {
        gtk_entry_set_text(GTK_ENTRY(entry), "");
        return;
    }

    // Handle "=" (Evaluate)
    if (strcmp(label, "=") == 0) {
        double result = 0.0;
        char expression[256];
        strcpy(expression, current);

        // Try evaluating using system 'bc' (UNIX tool)
        char command[512], buffer[128];
        sprintf(command, "echo '%s' | bc -l", expression);
        FILE *fp = popen(command, "r");
        if (fp != NULL) {
            if (fgets(buffer, sizeof(buffer), fp) != NULL) {
                gtk_entry_set_text(GTK_ENTRY(entry), buffer);
            }
            pclose(fp);
        } else {
            gtk_entry_set_text(GTK_ENTRY(entry), "Error");
        }
        return;
    }

    // Append function or number to entry
    char new_text[256];
    snprintf(new_text, sizeof(new_text), "%s%s", current, label);
    gtk_entry_set_text(GTK_ENTRY(entry), new_text);
}

int main(int argc, char *argv[]) {
    gtk_init(&argc, &argv);

    GtkWidget *window = gtk_window_new(GTK_WINDOW_TOPLEVEL);
    gtk_window_set_title(GTK_WINDOW(window), "Scientific Calculator");
    gtk_window_set_default_size(GTK_WINDOW(window), 400, 400);
    g_signal_connect(window, "destroy", G_CALLBACK(gtk_main_quit), NULL);

    GtkWidget *vbox = gtk_box_new(GTK_ORIENTATION_VERTICAL, 5);
    gtk_container_add(GTK_CONTAINER(window), vbox);

    // Display entry
    entry = gtk_entry_new();
    gtk_editable_set_editable(GTK_EDITABLE(entry), FALSE);
    gtk_box_pack_start(GTK_BOX(vbox), entry, FALSE, FALSE, 5);

    // Button labels
    const char *buttons[][5] = {
        {"7", "8", "9", "/", "sqrt"},
        {"4", "5", "6", "*", "pow"},
        {"1", "2", "3", "-", "log"},
        {"0", ".", "=", "+", "C"},
        {"sin", "cos", "tan", "(", ")"}
    };

    // Create button grid
    for (int i = 0; i < 5; i++) {
        GtkWidget *hbox = gtk_box_new(GTK_ORIENTATION_HORIZONTAL, 5);
        for (int j = 0; j < 5; j++) {
            GtkWidget *button = gtk_button_new_with_label(buttons[i][j]);
            g_signal_connect(button, "clicked", G_CALLBACK(on_button_clicked), NULL);
            gtk_box_pack_start(GTK_BOX(hbox), button, TRUE, TRUE, 5);
        }
        gtk_box_pack_start(GTK_BOX(vbox), hbox, TRUE, TRUE, 5);
    }

    gtk_widget_show_all(window);
    gtk_main();

    return 0;
}