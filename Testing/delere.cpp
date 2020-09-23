#include<iostream>
using namespace std;

class Point
{
private:
	int x;
	int y;
public:
	//Point(const Point&p) { x = p.x; y = p.y; }
	void setX(int i) {x = i;}
	void setY(int j) {y = j;}
	int getX() {return x;}
	int getY() {return y;}
	void print() { cout << "x = " << getX() << ", y = " << getY(); }
};


int main()
{
	Point p1;
	p1.setX(10);
	p1.setY(20);
	Point p2(p1);
	p2.print();
	return 0;
}
