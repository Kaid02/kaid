/*
Name : Kabir shrestha
Program : Write a program to read three side of triangle to calculate area .
Lab No. 01
*/
#include<stdio.h>
#include<conio.h>
#include<math.h>
    void main(){
    float a,b,c,s,area;

    printf("Enter the value of first side is:");
    scanf("%f",&a);

    printf("Enter the value of second side is:");
    scanf("%f",&b);

    printf("Enter the value of third side is:");
    scanf("%f",&c);

    s=(a+b+c)/2;
    printf("the value of s is:%f",s);

    area=pow(s*(s-a)*(s-b)*(s-c),0.5);
    printf("the area of triangle is:%f",area);


    getch();


}
