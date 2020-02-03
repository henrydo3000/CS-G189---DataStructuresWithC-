// Class declarations
class Hotdog
{
private:
	bool mCooked;
public:
	Hotdog();
	bool getmCooked();
	void setmCooked();
};

class Grill
{
public:
	Grill();
	void CookHotdog(Hotdog* hotdog);
};

class Person
{
public:
	void printmCooked(Hotdog* hotdog);
};
