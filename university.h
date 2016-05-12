#ifndef UNIVERSITY_H
#define UNIVERSITY_H

class University {

	std::string name;
  
	public:
	  University(std::string name, Student *stud)
		: name(name), stud(stud) {}
	  University(Student *stud = NULL)
		: University("Strathmore University", stud) {}
		std:: string getname() { return name; }  

	};

#endif