#include <vector>
#include <cstddef>

class ParticleSpecies1d2v{
    public:

    private:
        size_t N_;
        double Q_;
        std::vector<double> particle_x;
        std::vector<double> particle_vx;
        std::vector<double> particle_vy; 
        std::vector<double> particle_Fx;
        std::vector<double> particle_Fy;
        std::vector<size_t> xfound;
};

class ParticleList{

};