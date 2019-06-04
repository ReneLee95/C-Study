#include <iostream>
#include <stdlib.h>
#include <stdio.h>
using namespace std; 

class Student 
{ 
private: 
	char name[100];
	int age; 
	int studentID; 
public: 
	Student() 
	{ 
		cout << "생성자 호출!" << endl; 
	}
	void SetInfo(char *names, int _age, int _studentID) 
	{ 
		strcpy(name, names); //string copy 사용 , 문자열보다 길어지면 오버플로우가 발생하기때문에 char name[10]을 [100]으로 바꾸어주었음.. 
		age = _age; 
		studentID = _studentID; 
	}
	void GetInfo()  //사용자 이름 나이 학번 입력 란  , SetInfo에서 선언해준 name, age , studentID 사용 
	{
		cout << "이름: " << name << endl; 
		cout << "나이: " << age << endl; 
		cout << "학번: " << studentID << endl; 
	}
	~Student()  // 소멸자 호출 
	{
		cout << "소멸자 호출!" << endl; 
	} 
}; 

int main() 
{
	Student student[5]; //Student 클래스에 대해 student[5] 로 배열 선언 
	char name[10]; // 캐릭터형은 문자가 들어가기 때문에, 반드시 배열형태로 선언 해 주어야함. 
	int age, studentID; 
	for(int i=0; i<5; i++)  // for문을 이용하여 반복문 5번을 돌려 name, age, studentID 를 5번 입력 (5명의 사람분을 사용가능) 
	{ 
		cin >> name >> age >> studentID; 
		student[i].SetInfo(name, age, studentID); 
	}   // => 개인적으론 student배열을 크게 주어서 예를들어, student[10001]정도 주고 , int 변수 a를 하나 선언 한 다음에 cin을 통해 , for(int i=0; i<a; i++) 로 바꾸어 원하는 인원 수 만큼 바꾸면 더 재밌을거라 생각.. 
	
	for(int i=0; i<5; i++) 
	student[i].GetInfo(); 
}


//https://blog.hexabrain.net/174 이 사이트에 있는 내용을 토대로 공부 하였습니다.  , 주석은 제가 직접 분석하고 달았습니다. 
