#pragma once
#include <fstream>
#include <boost/archive/text_oarchive.hpp>
#include <boost/archive/text_iarchive.hpp>

template<typename T>
void Load_Object_From_Boost_Serialized_Data_File(T & obj, std::string const& file_name){
    std::ifstream infile(file_name);
    std::unique_ptr<boost::archive::text_iarchive> arc(new boost::archive::text_iarchive(infile));
        *arc >> obj;
}

template<typename T>
void Save_Object_To_A_Boost_Serliazed_Data_File(T const& obj, std::string const& file_name){
    std::ofstream outfile(file_name);
    std::unique_ptr<boost::archive::text_oarchive> arc(new boost::archive::text_oarchive(outfile));
    *arc << obj;
}
template<typename T>
void Append_Object_To_A_Boost_Serliazed_Data_File(T const& obj, std::string const& file_name){
    std::ofstream outfile(file_name, std::ios::app);
    std::unique_ptr<boost::archive::text_oarchive> arc(new boost::archive::text_oarchive(outfile));
    *arc << obj;
}
