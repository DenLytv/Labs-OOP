#pragma once
#include <iostream>

class B1 {
public:
	B1() {
		show();
	}
	virtual void show() {
		std::cout << "Show in B1" << std::endl;
	}
};

class B2 {
public:
	B2() {
		show();
	}
	void show() {
		std::cout << "Show in B2" << std::endl;
	}
};

class D1 : public B2, protected B1 {
public:
	D1() : B2{}, B1{} {
		show();
	}
	void show() override {
		std::cout << "Show in D1" << std::endl;
	}
};

class B3 {
public:
	B3() {
		show();
	}

	void show() {
		std::cout << "Show in B3" << std::endl;
	}
};

class D2 : public D1, protected B3 {
public:
	D2() : D1{}, B3{} {
		show();
	}
	void show() override {
		std::cout << "Show in D2" << std::endl;
	}
};

class D3 : public D2 {
public:
	D3() : D2{}  {
		show();
	}
	void show() override {
		std::cout << "Show in D3" << std::endl;
	}
};