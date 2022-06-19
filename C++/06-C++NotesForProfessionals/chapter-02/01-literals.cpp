// this

struct S{
    int x;
    S& operator = (const S& other){
        x=other.x;
        return *this;
    }
}