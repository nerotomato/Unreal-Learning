#include "HelloWorld.h"

#include <iostream>
#include <string>

using namespace std;
int add(int a, int b);

int main(){
    std::cout << "hello,world!" << std::endl;
    std::cout << add(1,2) << std::endl;

    string name;
    int age;
    float weight;
//    cin >> name;
//    cin >> age;
    cin >> name >> age >>weight;
    cout << "Hello,"<< name << " ,age:" << age << " ,weight: "<< weight << endl;
    return 0;
}
