#include <stdio.h>
//기본입출력
//기본 출력 함수 : printf ("출력할 내용")
//기본 입력 함수 : scanf("입력할 데이터타입문자코드", &변수명
void main()  {
     printf("Hello, c language\nHi~!"); //출력
     char name [30]; //문자배열(문자열 변수선언) string이 없음..
     int age;
     scanf("your age : $d", &age); //입력
     prinf("your age is %d and $s", age,name);
     /*형식문자코드(Format Character)
     %c : 하나의 문자 %d:(10진수) 정수형 */
     
     }
