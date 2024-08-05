/*
������ 3
��� ����� �������
��� ���� ������� ����������� ��������� ��� ������������� �������� �� ������������ ������������ �������. 
����� ������� �������� � ������� ����� �������, ������� ��� ��������: �����������, ���������� �������, ��������������, 
�������������. ������ ��� ��������: ����� ������ ���� ������� ����� ���������, ������� � ��������� �� ����� ���������� 
����� 20 ���������.
� ���������, ���������� ��������, � ���������� �������� ������������� �������� � ���������� ���� �� ������.
��� ����� �?1� � ���������� ���������� ������� �� ���������� ��������� (20 ��� ����� ���������). 
��� ������ �������� ������ ���� � ��� �������, � ������� ��� �����������.
���������� �������� ����������� ���������������� ������� ���� ������, ����� ����������� ��� ����� ������ ���������� 
� ����������� ��������� ������ �������.
*/

#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> db(20);

    int input_number;
    cout << "input number: ";
    cin >> input_number;

    int head = 0;
    int tail = 0;

    while (input_number != -1){
        db[head] = input_number;
        head = (head+1) % 20;
        if (head == tail){
            tail = (tail+1) % 20;
        }

        cout << "input number: ";
        cin >> input_number;
    }

    if (tail !=0){
        cout << db[tail-1] << " ";
    }

    while (tail != head){
        cout << db[tail] << " ";
        tail = (tail + 1) % 20;
    }
    
}