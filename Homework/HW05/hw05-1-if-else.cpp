/*
    รับตัวอักขระมาทั้งหมด 4 ค่า แล้วนำมาแสดงผลย้อนกลับ เช่น กรอกค่า L M X Y ต้องแสดงเป็น Y X M L เป็นต้น
    
    Test case:
        L M Y K
    Output:
        Result: K Y M L

    Test case:
        A B C D
    Output:
        Result: D C B A
*/
//#include <stdio.h>
//int main() {
   // char values[4] ; //collect 4 letters.
    
   // for (int i = 0; i < 4; i++) { //It loops 4 times to get the character from the user and store it in value.
       // scanf( "%c", &values[i]) ; //get the value to store in values variable.
   // }// end for
   // printf( "Result: ") ; //output result on display
    //for (int i = 3; i >= 0; i--) { //Loops 4 times to return the values ​​character from the end to the end.
        //printf("%c ", values[i]) ; //output on display
    //}//end for
    
    //return 0 ;
//}//end main fuction


#include <stdio.h>

int main() {
    char values[4];

    // รับอักขระ 4 ค่าจากผู้ใช้
    printf("Enter 4 characters: ");
    for (int i = 0; i < 4; i++) {
        scanf(" %c", &values[i]);
    }

    // แสดงผลอักขระในลำดับกลับหลัง
    printf("Result: ");
    for (int i = 3; i >= 0; i--) {
        printf("%c ", values[i]);
    }

    return 0;
}