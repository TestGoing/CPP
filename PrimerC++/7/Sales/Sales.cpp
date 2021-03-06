#include <iostream>
#include <string>

using namespace std;

class Sales_data
{
	friend std::istream & operator >> ( std::istream&, Sales_data& );
	friend std::ostream & operator << ( std::ostream&, const Sales_data& );
	//friend bool operator < ( const Sales_data&, const Sales_data& );
	friend bool operator == ( const Sales_data &, const Sales_data & );
public:
	Sales_data() = default;
	Sales_data( const std::string & book ): bookNo( book ) {}
	Sales_data( std::istream & is ) {is >> *this;}
public:
	Sales_data& operator += ( const Sales_data& );
	std::string isbn() const { return bookNo;}
private:
	std::string bookNo; //书籍编号,隐式初始化为空串
	unsigned units_sold = 0; //销售量显式初始化为0.0
	double sellingprice = 0.0; //原始价格,显式初始化为0.0
	double saleprice = 0.0;	//实售价格,显式初始化为0.0
	double discount = 0.0; //折扣,显式初始化为0.0
};

inline bool compareIsbn( const Sales_data &lhs, const Sales_data & rhs )
{
	return lhs.isbn() == rhs.isbn();
}

inline bool operator == ( const Sales_data & lhs, const Sales_data & rhs )
{
	return lhs.units_sold == rhs.units_sold && lhs.sellingprice == rhs.sellingprice &&
	       lhs.saleprice == rhs.saleprice && lhs.isbn() == rhs.isbn();
}

inline bool operator != ( const Sales_data & lhs, const Sales_data &rhs )
{
	return !( lhs == rhs );
}

Sales_data& Sales_data::operator += ( const Sales_data & rhs )
{
	units_sold += rhs.units_sold;
	saleprice = ( rhs.saleprice * rhs.units_sold + saleprice * units_sold ) / ( rhs.units_sold + units_sold );
	if ( saleprice != 0 )
		discount = saleprice / sellingprice;
	return *this;
}



Sales_data operator + ( const Sales_data & lhs, const Sales_data & rhs )
{
	Sales_data ret( lhs ); //  lhs的内容拷贝到临时变量ret中,这种做法便于运算
	ret += rhs;
	return ret;
}

std::istream& operator >> ( std::istream & in, Sales_data& s )
{
	in >> s.bookNo >> s.units_sold >> s.sellingprice >> s.saleprice;
	if ( in && s.sellingprice != 0 )
		s.discount = s.saleprice / s.sellingprice;
	else
		s = Sales_data();
	return in;
}


std::ostream & operator << ( std::ostream & out, const Sales_data & s )
{
	out << s.isbn() << " " << s.units_sold << " "
	    << s.sellingprice << " " << s.saleprice << " " << s.discount;
	return out;
}

int main()
{
	Sales_data book;
	std::cout << "请输入销售记录: " << std::endl;
	while ( std::cin >> book )
	{
		std::cout << "ISBN,售出本数,原始价格,实售价格,折扣为" << book << std::endl;
	}
	return 0;
}