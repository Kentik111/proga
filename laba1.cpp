#include <iostream>
#include <cmath>
using namespace std;
int main() {
	setlocale(LC_ALL, "rus");
	float widht, hight, area, perimetr, diagonal;
	// ���� ������
	cout << "������� ������ ��������������" << endl;
	cin >> widht;
	cout << "������� ����� ��������������" << endl;
	cin >> hight;
	area = widht * hight; // ���o������ �������. ������� S =  a * b
	perimetr = 2 * (widht + hight); // ���������� ���������. ������� P = 2 * (a + b)
	diagonal = sqrt(widht * widht + hight * hight); // ���������� ���������. �������  c = ?(a^2 + b^2)
	cout << "������� ��������������" << " " << area << endl;
	cout << "�������� ��������������" << " " << perimetr << endl;
	cout << "����� ���������" << " " << diagonal << endl;
	return 0;
}