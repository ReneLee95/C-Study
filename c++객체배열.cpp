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
		cout << "������ ȣ��!" << endl; 
	}
	void SetInfo(char *names, int _age, int _studentID) 
	{ 
		strcpy(name, names); //string copy ��� , ���ڿ����� ������� �����÷ο찡 �߻��ϱ⶧���� char name[10]�� [100]���� �ٲپ��־���.. 
		age = _age; 
		studentID = _studentID; 
	}
	void GetInfo()  //����� �̸� ���� �й� �Է� ��  , SetInfo���� �������� name, age , studentID ��� 
	{
		cout << "�̸�: " << name << endl; 
		cout << "����: " << age << endl; 
		cout << "�й�: " << studentID << endl; 
	}
	~Student()  // �Ҹ��� ȣ�� 
	{
		cout << "�Ҹ��� ȣ��!" << endl; 
	} 
}; 

int main() 
{
	Student student[5]; //Student Ŭ������ ���� student[5] �� �迭 ���� 
	char name[10]; // ĳ�������� ���ڰ� ���� ������, �ݵ�� �迭���·� ���� �� �־����. 
	int age, studentID; 
	for(int i=0; i<5; i++)  // for���� �̿��Ͽ� �ݺ��� 5���� ���� name, age, studentID �� 5�� �Է� (5���� ������� ��밡��) 
	{ 
		cin >> name >> age >> studentID; 
		student[i].SetInfo(name, age, studentID); 
	}   // => ���������� student�迭�� ũ�� �־ �������, student[10001]���� �ְ� , int ���� a�� �ϳ� ���� �� ������ cin�� ���� , for(int i=0; i<a; i++) �� �ٲپ� ���ϴ� �ο� �� ��ŭ �ٲٸ� �� ������Ŷ� ����.. 
	
	for(int i=0; i<5; i++) 
	student[i].GetInfo(); 
}


//https://blog.hexabrain.net/174 �� ����Ʈ�� �ִ� ������ ���� ���� �Ͽ����ϴ�.  , �ּ��� ���� ���� �м��ϰ� �޾ҽ��ϴ�. 
