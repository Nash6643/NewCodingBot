    #include<stdio.h>
int main(){

int num1;
int num2;
int num3;

int count;

printf("Enter number one: ");

scanf("%d",&num1);

printf("Enter number two: ");

scanf("%d",&num2);

printf("Enter number three: ");

scanf("%d",&num3);

if (num1 != num2 && num1 != num3){
    count++;
}
if (num2 != num1 && num2 != num3){

    count++;;
}
if (num3 != num1 && num3 != num2){

    count++;;
}

if (count == 0){
    count = 1;
}else if (count == 1){
    count = 2;
}else {
    count = 3;
}

printf("Number of unique integers is: %d\n", count);




    return 0;
}
