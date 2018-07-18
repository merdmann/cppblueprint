
#ifndef _BUFFER_H

class buffer {
    private:
        char *data = nullptr;
        int wrptr = 0;
        int rdptr = 0;
        unsigned size = 0;

    // member functions
    public:
        void put(char c);
        char get() ;   
};
#endif

#define _BUFFER_H