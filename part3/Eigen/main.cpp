#include <Eigen/Dense>
#include <iostream>
using namespace std;

int main() {
    Eigen::Vector3d p_co(0.4, 1.1, 3.2);
    Eigen::Matrix3d R_co;
    R_co << 0.5, -0.866025, 0,
            0.866025, 0.5, 0,
            0, 0, 1;
    Eigen::Vector3d p_wc(2.3, -1.7, 1.2);
    Eigen::Matrix3d R_wc;
    R_wc << 0, 0, 1,
            0, 1, 0,
           -1, 0, 0;
    Eigen::Vector3d p_wo = p_wc + R_wc * p_co;
    Eigen::Matrix3d R_wo = R_wc * R_co;

    cout << "p_wo = " << p_wo.transpose() << endl;
    cout << "R_wo =\n" << R_wo << endl;
    return 0;
}
