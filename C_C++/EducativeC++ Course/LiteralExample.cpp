namespace Distance{
    class MyDistance{
        public:
            MyDistance(double i):m(i){}
            friend MyDistance operator +(const MyDistance& a, const MyDistance& b){
                return MyDistance(a.m + b.m);
            }
            friend MyDistance operator - (const MyDistance& a, const MyDistance& b){
                return MyDistance(a.m - b.m)
            }

            friend std::ostream& operator << (std::ostream &out, const MyDistance& myDist){
                out << myDist.m << " m";
                return out;
            }
        private:
        double m;
    }
}

