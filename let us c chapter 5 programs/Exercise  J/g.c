// (g) Given three variables x, y, z write a function to circularly shift
// their values to right. In other words if x = 5, y = 8, z = 10 after
// circular shift y = 5, z = 8, x =10 after circular shift y = 5, z = 8
// and x = 10. Call the function with variables a, b, c to
// circularly shift values.

int shift(int *a, int *b, int *c){

    int temp1,temp2,temp3;

    temp1 = *c;
    temp2 = *a;
    temp3 = *b;

    *a = temp1;
    *b = temp2;
    *c = temp3;

    return 0;

}

int main(){
    int a, b, c;

        printf("\nEnter x : ");
        scanf("%d",&a);
        printf("\nEnter y : ");
        scanf("%d",&b);
        printf("\nEnter z : ");
        scanf("%d",&c);
 
        printf("\nOriginal Values         ");
        printf("x = %d, y = %d, z = %d",a,b,c);

        shift(&a, &b, &c);
        printf("\nValues after a shift    ");
        printf("x = %d, y = %d, z = %d",a,b,c);

        printf("\n\n");

    return 0;
}