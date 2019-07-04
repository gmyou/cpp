#include <fstream>
#include <iostream>

using namespace std;

#define MAX_SIZE 1000
char inputString[MAX_SIZE];

int  main(){
    // 파일 입력 (쓰기)
    // ofstream outFile("/data/outputAnd.csv");

    // for(int i = 0 ; i < 10 ; i++){
    //     outFile << i << endl;
    // }

    // outFile.close();
    //파일 출력 (읽기)
    ifstream inFile("/data/outputAnd.csv");

    while(!inFile.eof()){
        inFile.getline(inputString, 100);
        cout << inputString << endl;
    }
    inFile.close();
    return 0;

}