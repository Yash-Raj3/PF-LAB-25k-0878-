#include<stdio.h>
int main(){
int Attendance;
int InternalMarks;
printf("Enter your Attendance(in percent):");
scanf("%d",&Attendance);
if(Attendance>=75){
    printf("Enter your internal Marks:");
    scanf("%d",&InternalMarks);
    if(InternalMarks>=45){
    printf("You can appear in Exam");
}else {
    printf("You Can not appear in Exam");
}

}else{
    printf("You can not appear in Exam");
}
return 0;

}