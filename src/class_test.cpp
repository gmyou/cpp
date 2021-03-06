#include <stdio.h>
#include <iostream>

using namespace std;

class People{
private:
        int age;
        char* name;
        double height;
public:
        void set_People(int _age , char* _name , double _height);
        void show_People();

        People(){
            char* t = "naddru";
            cout << "=== 생성자 호출 : 인자값 없음 ===" << endl;
            age = 30;
            name = "naddru";
            height = 182;
        }

        People(int _age , char* _name , double _height){
            cout << "=== 생성자 호출 : 인자값 3개 ===" << endl;
            age = _age;
            name = _name;
            height = _height;
        }
};

void People::set_People(int _age, char* _name , double _height){
    age = _age;
    name = _name;
    height = _height;
}

void People::show_People(){
    cout << "나이 : " << age << endl;
    cout << "이름 : " << name << endl;
    cout << "키 : " << height << "  이었으면 좋겠다. ㅎ "<<endl << endl;
}

int  main(){
    // 기본 생성자 사용
    People p = People();
    p.show_People();

    // 오버로딩 된 생성자 사용
    People p2(31 , "lina" , 168);
    p2.show_People();

    //p 객체의 값을 변경 
    p.set_People(18 , "child" , 178);
    p.show_People();
    return 0;
}