#include <vector>
#include <cstddef>
#include <string>

using std::string;
class ParticleSpecies1d2v{
    public:
        ParticleSpecies1d2v(size_t N, double Q, string ID) :
            N_(N), Q_(Q), species_id_(ID),
            particle_x_(N, 0.0), 
            particle_vx_(N, 0.0), particle_vy_(N, 0.0),
            particle_Fx_(N, 0.0), particle_Fy_(N, 0.0),
            xfound_(N, 0)
            {}
    private:
        size_t N_;
        double Q_;
        string species_id_;
        std::vector<double> particle_x_;
        std::vector<double> particle_vx_;
        std::vector<double> particle_vy_; 
        std::vector<double> particle_Fx_;
        std::vector<double> particle_Fy_;
        std::vector<size_t> xfound_;
};

class ParticleList{

};