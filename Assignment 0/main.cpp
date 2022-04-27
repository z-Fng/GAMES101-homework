#include <cmath>
#include <eigen3/Eigen/Core>
#include <eigen3/Eigen/Dense>
#include <iostream>

const float Pi = std::acos(-1.0f);

int main()
{
    Eigen::Vector3f P_affine(2.0f, 1.0f, 1.0f);

    float theta_degree = 45.0f;

    float translation_x = 1.0f;
    float translation_y = 2.0f;

    /*
        v = (x, y, 1)
        w = (-y, x, 1)

        x_prime = || v || * cos theta * v / || v || +
                  || w || * sin theta * w / || w ||
                = cos theta * v + sin theta * w
                = cos theta * (x, y, 1) + sin theta * (-y, x, 1)

        T_rotation = | cos theta, - sin theta, 0 |
                   | sin theta,   cos theta, 0 |
                   |         0,           0, 1 |
    */

    // rotation
    float theta = theta_degree / 180.0f * Pi;
    float sin_theta = std::sin(theta);
    float cos_theta = std::cos(theta);

    Eigen::Matrix3f T_rotation;
    T_rotation << cos_theta, -sin_theta, 0.0f,
        sin_theta, cos_theta, 0.0f,
        0.0f, 0.0f, 1.0f;

    // translation
    Eigen::Matrix3f T_translation;
    T_translation << 1.0f, 0.0f, 1.0f,
        0.0f, 1.0f, 2.0f,
        0.0f, 0.0f, 1.0f;

    // transformation
    Eigen::Matrix3f T = T_translation * T_rotation;

    Eigen::Vector3f result = T * P_affine;

    std::cout << result << std::endl;

    return 0;
}