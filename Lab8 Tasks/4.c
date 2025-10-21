#include <stdio.h>
int main()
{
    float t[7][3],avg,sum;
     int  i,j;
    printf("Enter temperature of 7 days(Morning,AfterNoon,Night)\n");
    for (i = 0; i < 7; i++)
    {
        printf("Day %d\n",i+1);
for(j=0;j<3;j++){
    if(j==0){
        printf("Morning Temp:");
    }else if(j==1){
        printf("Afternoon Temp:");
    }else if(j==2){
        printf("Night Temp:");
    }
    scanf("%f",&t[i][j]);
}
    }

    printf("Day\tMorning\tAfternoon\t\tNight\n");
    for(i=0;i<7;i++){
printf("%d\t",i+1);
for(j=0;j<3;j++){
printf("%.1f\t\t",t[i][j]);
}
printf("\n");
    }
    printf("--Average Temperature of Days--\n");
    for(i=0;i<7;i++){
        sum =0;
        avg=0;
for(j=0;j<3;j++){
    sum+=t[i][j];
}
avg = sum/3;
printf("Average Temperature of Day %d is %.1f:",i+1,avg);
printf("\n");
    }
    return 0;
}
