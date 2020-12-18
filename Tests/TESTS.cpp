#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "Class.h"

using testing::Eq;

namespace {
    class classDeclaration : public testing::Test{
    public:
        Studentas obj;
        classDeclaration(){
            obj;
        }
    };
}
TEST_F(classDeclaration, nameOfTheTest1){
    for (int i=1; i<1000+1; i++) {
        string j = std::to_string(i);
        obj.setVardas("Vardas" + j);
        obj.setPavarde("Pavarde" + j);
        ASSERT_EQ("Vardas" + j, obj.getVardas());
        ASSERT_EQ("Pavarde" + j, obj.getPavarde());
    }
}
TEST_F(classDeclaration, nameOfTheTest2){
    vector<int> pazymiai1;
    vector<int> pazymiai2;
    for (auto k = 0; k < 5; k++) {
        pazymiai1.push_back(rand() % 10 + 1);
        pazymiai2.push_back(rand() % 10 + 1);
    }
    obj.setNdRezultatus(pazymiai1);
    for (auto k = 0; k < 5; k++) {
        ASSERT_THAT(pazymiai2, obj.getNdRezultatus());
    }
}
