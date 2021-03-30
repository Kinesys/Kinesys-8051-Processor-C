#include <reg51.h>

void main(void) {
    unsigned char a = 2, b = 0; //변수 선언과 변수 초기화
    
    if (a) P1 = 0x04; //a가 0이 아니므로 조건식은 참이 되고 포트 1에 0x04 출력

    if (a < b) { //조건식이 거짓이므로 else 다음 { } 부분 실행
        P1 = 0x00; //포트 1에 0x00 출력
        P2 = 0x00; //포트 2에 0x00 출력
    }

    else {
        P1 = 0xb3; //포트 1에 0xb3 출력
        P2 = 0xe5; //포트 2에 0xe5출력
    }
}
