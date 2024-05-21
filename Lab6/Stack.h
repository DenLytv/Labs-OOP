#pragma once
#include <iostream>
#include <memory>
#include <vector>
#include <sstream>
#include <cmath>

template<typename T>
struct Node {
	T data;
	std::unique_ptr<Node> next;
	Node(const T& value) : data(value), next(nullptr) {}
};

template<typename T>
class Stack {
public:
	Stack();
	void push(const T& value);
	void pop();
	T top() const;
	bool isEmpty() const;
private:
	std::unique_ptr<Node<T>> topPtr;
};

template<typename T>
inline Stack<T>::Stack() : topPtr(nullptr) {}

template<typename T>
inline T Stack<T>::top() const {
	if (isEmpty()) {
		std::cerr << "Error! Stack is empty." << std::endl;
		return T();
	}
	return topPtr->data;
}

template<typename T>
inline bool Stack<T>::isEmpty() const {
	return topPtr == nullptr;
}

template<typename T>
inline void Stack<T>::pop() {
	if (isEmpty()) {
		std::cerr << "Error! Stack is empty." << std::endl;
		return;
	}
	topPtr = std::move(topPtr->next);
}

template<typename T>
inline void Stack<T>::push(const T& value) {
	auto newNode = std::make_unique<Node<T>>(value);
	newNode->next = std::move(topPtr);
	topPtr = std::move(newNode);
}

template<typename T>
T evaluatePostfixExpression(const std::string& expression) {
	Stack<T> operandStack;
	std::istringstream iss(expression);
	std::string token;

	while (iss >> token) {
		if (isdigit(token[0])) {
			T operand = std::stod(token);
			operandStack.push(operand);
		}
		else {
			if (operandStack.isEmpty()) {
				std::cerr << "Error! Invalid expression. ";
				return T();
			}
			T operand2 = operandStack.top();
			operandStack.pop();

			if (operandStack.isEmpty()) {
				std::cerr << "Error! Invalid expression. ";
				return T();
			}
			T operand1 = operandStack.top();
			operandStack.pop();

			if (token == "+") {
				operandStack.push(operand1 + operand2);
			}
			else if (token == "-") {
				operandStack.push(operand1 - operand2);
			}
			else if (token == "*") {
				operandStack.push(operand1 * operand2);
			}
			else if (token == "/") {
				if (operand2 == 0) {
					std::cerr << "Error! Division by zero. ";
					return T();
				}
				operandStack.push(operand1 / operand2);
			}
			else {
				std::cerr << "Error! Invalid operator: " << token << ". ";
				return T();
			}
		}
	}

	if (operandStack.isEmpty()) {
		std::cerr << "Error! Invalid expression.";
		return T();
	}

	T result = operandStack.top();
	operandStack.pop();

	if (!operandStack.isEmpty()) {
		std::cerr << "Error! Invalid expression.";
		return T();
	}

	return result;
}