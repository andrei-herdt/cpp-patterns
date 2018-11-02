#include <iostream>
#include <vector>

class Lidar {
   public:
    void Send() const { std::cout << "Lidar" << std::endl; }
};

class Radar {
   public:
    void Send() const { std::cout << "Radar" << std::endl; }
};

template <typename T>
class Sensor(T& sensor) : sensor_(sensor) {
    struct Concept {
        virtual ~Concept() {}
        virtual void Send() const = 0;
    }

    template <typename T>
    struct Model : Concept {
        Model(

    }

    T sensor_;
}

int main() {
    std::vector<Lidar> sensors;
    sensors.push_back(Lidar{});
    sensors.push_back(Lidar{});
    // sensors.push_back(Radar{});

    for (const auto& sensor : sensors) {
        sensor.Send();
    };
    return 0;
}
