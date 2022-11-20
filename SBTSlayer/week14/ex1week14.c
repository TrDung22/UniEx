#include <stdio.h>
#include <string.h>

typedef struct {
    char Name[30];
    int StudentID;
    struct
    {
        int day;
        int month;
        int year;
    }DOB;
    struct
    {
        double math;
        double physics;
        double chemistry;
    }grade;    
}Student;

int main(){
    Student S[100];
    int n;
    printf("Nhap so sinh vien (5<=n<=10): n=");scanf("%d",&n);
    for (int i=0;i<n;++i){
        printf("Nhap du lieu cho sinh vien %d: \n",i+1);
        printf("Nhap ho ten: ");
        fflush(stdin); fgets(S[i].Name, sizeof(S[i].Name), stdin);
        S[i].Name[strlen(S[i].Name)-1]='\0';
        printf("Nhap MSSV: ");scanf("%d",&S[i].StudentID);
        printf("Nhap DOB: \n");
        printf("Ngay: ");scanf("%d",&S[i].DOB.day);
        printf("Thang: ");scanf("%d",&S[i].DOB.month);
        printf("Nam: ");scanf("%d",&S[i].DOB.year);
        printf("Nhap diem 3 mon (0~10):\n");
        do{
            printf("Toan: ");scanf("%lf",&S[i].grade.math);
        }while(S[i].grade.math<0||S[i].grade.math>10);
        do{
            printf("Ly: ");scanf("%lf",&S[i].grade.physics);
        }while(S[i].grade.physics<0||S[i].grade.physics>10);
        do{
            printf("Hoa: ");scanf("%lf",&S[i].grade.chemistry);
        }while(S[i].grade.chemistry<0||S[i].grade.chemistry>10);
    };
    
    printf("Danh sach sinh vien tong diem >=23:\n");
    for (int i=0;i<n;++i){
        if(S[i].grade.math+S[i].grade.physics+S[i].grade.chemistry>=23){
            printf("%s ",S[i].Name);
            printf("MSSV:%d ",S[i].StudentID);
            printf("%d/%d/%d ",S[i].DOB.day,S[i].DOB.month,S[i].DOB.year);
            printf("Toan: %lf ",S[i].grade.math);
            printf("Ly: %lf ",S[i].grade.physics);
            printf("Hoa: %lf\n",S[i].grade.chemistry);
        }
    }

    printf("Danh sach sinh vien khong co diem liet:\n");
    for (int i=0;i<n;++i){
        if(S[i].grade.math>3&&S[i].grade.physics>3&&S[i].grade.chemistry>3){
            printf("%s ",S[i].Name);
            printf("MSSV:%d ",S[i].StudentID);
            printf("%d/%d/%d ",S[i].DOB.day,S[i].DOB.month,S[i].DOB.year);
            printf("Toan: %lf ",S[i].grade.math);
            printf("Ly: %lf ",S[i].grade.physics);
            printf("Hoa: %lf\n",S[i].grade.chemistry);
        }
    }
    return 0;
}