#ifndef CHIEF_H
#define CHIEF_H	


class Chief
{
	public:
		Chief();
		~Chief();
		void helloUser(std::string name);
		void helloUser(std::string name) const;
};

#endif //CHIEF_H
