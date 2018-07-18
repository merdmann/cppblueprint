class buffer {
    private:
        char *data = nullptr;
        int wrptr = 0;
        int rdptr = 0;
        unsigned size = 0;

    // member functions
    void put(char c);
    char get() ;   
};