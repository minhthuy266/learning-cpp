#include <iostream>
using namespace std;

class AbstractEmployee {
	virtual void AskForPromotion() = 0;
};


class Employee: AbstractEmployee {
private: 
	string Company;
	int Age;

protected:
	string Name;


public:
	void setName(string name) { // setter
		Name = name;
	}
	string getName() { // getter
		return Name;
	}
	void setCompany(string company) {
		Company = company;
	}
	string getCompany() {
		return Company;
	}
	void setAge(int age) {
		if (age >= 18)
		Age = age;
	}
	int getAge() {
		return Age;
	}

	void IntroduceYourself() {
		cout << "Name - " << Name << endl;
		cout << "Company - " << Company << endl;
		cout << "Age - " << Age << endl;

	}

	Employee(string name, string company, int age) {
		Name = name;
		Company = company;
		Age = age;
	}

	void AskForPromotion() {
		if (Age > 30)
			cout << Name << " got promoted! " << endl;
		else
			cout << Name << ", sorry no promotion for you! " << endl;
	}

	virtual void Work() {
		cout << Name << " is checking email, task backlog, performing tasks..." << endl;
	}
}; 

class Developer:public Employee{
public:
	string FavProgrammingLanguage;
	Developer(string name, string company, int age, string favProgrammingLanguage) 
		:Employee(name, company, age) {
		FavProgrammingLanguage = favProgrammingLanguage;
	}

	void fixBug() {
		cout << Name << " fixed bux using " << FavProgrammingLanguage << endl;
	}

	void Work() {
		cout << Name << " is writting "<<FavProgrammingLanguage <<" code" << endl;
	}

};

class Teacher:public Employee {
public:
	string Subject;
	void PrepareLesson() {
		cout << Name << " is preparing" << Subject << " lesson " << endl;
	}
	Teacher(string name, string company, int age, string subject) : Employee(name, company,age) {
		subject = subject;
	}

	void Work() {
		cout << Name << " is teaching  " << Subject << endl;
	}
};


int main() {
	Employee employee1 = Employee("Saldina", "YT", 25);
	Employee employee2 = Employee("John", "Amazon", 35);

	Developer d = Developer("Saldina","YT", 25, "C++");
	d.fixBug();
	d.AskForPromotion();

	Teacher t = Teacher("Jack", "Cool School", 35, "History");
	t.PrepareLesson();
	t.AskForPromotion();

	d.Work();
	t.Work();

	Employee* e1 = &d;
	Employee* e2 = &t;

	e1->Work();
	e2->Work();
}


