#ifndef DYNARR_H
#define DYNARR_H
//1.Add template function
template<class T>
class dynArr
{
        private:
            T *data;
            int size;
        public:
            dynArr(int);
            ~dynArr();
            void setValue(int, T);
            T getValue(int);
            int getsize();
};


#endif // DYNARR_H
