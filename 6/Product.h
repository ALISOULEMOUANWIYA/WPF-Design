#include <iostream>
using namespace std;
class Product
{
    private:
        string name;
        double price;
        int score;
    public:
        Product() = default;
        
        void read();
        void print() const;
        bool is_better_than(const Product&) const;
        
        void set_name(string) ;
        void set_price(double) ;
        void set_score(int) ;

        string get_name() const;
        double get_price() const;
        int get_score() const;
};