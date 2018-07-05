
#include "program_options.hpp"
#include <string>
#include <iostream>

//constructor
Program_Options::Program_Options(int const& argc, char** const& argv){
	using namespace boost::program_options;

	//build all the possible flags and add description.
    options_description desc (Get_Options_Description());

	//set positional arguments
	positional_options_description pod;

	//build variable map
	Build_Variable_Map(argc,argv,desc,pod);

	//process immediate options
	Process_Immediate_Options(desc);

	//validate the mandatory flags
	Check_For_Mandatory_Flags_Not_Passed();
}
boost::program_options::options_description Program_Options::Get_Options_Description(void){
	using namespace boost::program_options;

	//Program Description
	options_description desc(DESCRIPTION);

	//Program Flags
	desc.add_options()

	//these are flag descriptions of that can be passed into the class.
	//the code inserted,  are the flags added by the user through the
	//program_options_maker flag interface
	("input_files",value<std::vector<std::string>>()->multitoken(),"the name of the UniLang file to compile")
	("dir",value<std::string>(),"the directory to convert all unilang files from")
	("exporter",value<std::string>(),"the exporter front-end to use for generating the source code (often a company or interested party)")
	("language",value<std::string>(),"the resulting language of the compiler given to the exporter")
	("style",value<std::string>(),"the style you'd like the exporter to employ. Each exporter has their own set of styles for each of the languages they support")
	("recursive_dependency_paths",value<std::vector<std::string>>()->multitoken(),"paths to recursively search for the dependencies of the file being compiled.  This can point to both real code, or Unilang files")
	("dependency_paths",value<std::vector<std::string>>()->multitoken(),"paths to search for the dependencies of the file being compiled.  This can point to both real code, or Unilang files")
	("unit-test-link",value<std::string>(),"A link or file path to where the unit test for the object/set of global functions are")
	("unit_test_path",value<std::vector<std::string>>()->multitoken(),"the path to where the unit test code is")
	("documentation-link",value<std::string>(),"Link to further documentation for the object/set of global functions")
	("build-and-test","sets up a temp work area to build the transcompiled code with its dependencies, and run any unit tests that may exist")
	("skip-transfer","Decide whether to skip transfering the exported file (this usually entails sending over files over a network possibly)")

	//+----------------------------------------------------------+
	//| Obligatory                                               |
	//+----------------------------------------------------------+
	("help,h","produce this help message")
	("version,v","display version")
	;

    return desc;
}
void Program_Options::Build_Variable_Map(int const& argc, char** const& argv, boost::program_options::options_description const& desc, boost::program_options::positional_options_description const& pod){
	using namespace boost::program_options;

	//store user flag data. crash elegantly if they pass incorrect flags.
	try{
		store(command_line_parser(argc, argv).options(desc).positional(pod).run(), vm);
		notify(vm);
	}
	catch(error& e){
		std::cerr << "ERROR: " << e.what() << std::endl;
		std::cerr << desc << std::endl;
		exit(EXIT_FAILURE);
	}

	return;
}
void Program_Options::Process_Immediate_Options( boost::program_options::options_description const& desc){

	//do not continue the program if the user wanted to see the version or help data
	if (vm.count("version")){
		std::cout << "\nThis is version " << VERSION_NUMBER << " of the " + TOOL_NAME + ".\n\n";
		exit(EXIT_SUCCESS);
	}
	else if (vm.count("help")){
		std::cout << '\n' << desc << '\n';
		exit(EXIT_SUCCESS);
	}

	return;
}

void Program_Options::Check_For_Mandatory_Flags_Not_Passed(){
	std::vector<std::string> flags_not_passed;
	//if(!vm.count("input_files")){flags_not_passed.push_back("input_files");}
	//if(!vm.count("exporter")){flags_not_passed.push_back("exporter");}
	//if(!vm.count("language")){flags_not_passed.push_back("language");}

	if (!flags_not_passed.empty()){
		std::cerr << "you need to pass the following flags still:\n";
		for (auto it: flags_not_passed){
			std::cerr << '\t' << it << '\n';
		}
		exit(EXIT_FAILURE);
	}
	return;
}
bool Program_Options::No_Flags_Were_Passed() const{
	if (vm.count("input_files")){return false;}
	if (vm.count("exporter")){return false;}
	if (vm.count("language")){return false;}
	if (vm.count("style")){return false;}
	if (vm.count("recursive_dependency_paths")){return false;}
	if (vm.count("dependency_paths")){return false;}
	if (vm.count("unit-test-link")){return false;}
	if (vm.count("unit_test_path")){return false;}
	if (vm.count("documentation-link")){return false;}
	if (vm.count("build-and-test")){return false;}
	if (vm.count("skip-transfer")){return false;}
	if (vm.count("dir")){return false;}
   return true;
}
std::vector<std::string> Program_Options::Input_Files() const{
	std::vector<std::string> data;
	if (vm.count("input_files")){
		data = vm["input_files"].as<std::vector<std::string>>();
	}

	return data;
}
std::string Program_Options::Dir() const{
	std::string data;
	if (vm.count("dir")){
		data = vm["dir"].as<std::string>();
	}

	return data;
}
std::string Program_Options::Exporter() const{
	std::string data;
	if (vm.count("exporter")){
		data = vm["exporter"].as<std::string>();
	}

	return data;
}
std::string Program_Options::Language() const{
	std::string data;
	if (vm.count("language")){
		data = vm["language"].as<std::string>();
	}

	return data;
}
std::string Program_Options::Style() const{
	std::string data;
	if (vm.count("style")){
		data = vm["style"].as<std::string>();
	}

	return data;
}
std::vector<std::string> Program_Options::Recursive_Dependency_Paths() const{
	std::vector<std::string> data;
	if (vm.count("recursive_dependency_paths")){
		data = vm["recursive_dependency_paths"].as<std::vector<std::string>>();
	}

	return data;
}
std::vector<std::string> Program_Options::Dependency_Paths() const{
	std::vector<std::string> data;
	if (vm.count("dependency_paths")){
		data = vm["dependency_paths"].as<std::vector<std::string>>();
	}

	return data;
}
std::string Program_Options::Unit_Test_Link() const{
	std::string data;
	if (vm.count("unit-test-link")){
		data = vm["unit-test-link"].as<std::string>();
	}

	return data;
}
std::vector<std::string> Program_Options::Unit_Test_Path() const{
	std::vector<std::string> data;
	if (vm.count("unit_test_path")){
		data = vm["unit_test_path"].as<std::vector<std::string>>();
	}

	return data;
}
std::string Program_Options::Documentation_Link() const{
	std::string data;
	if (vm.count("documentation-link")){
		data = vm["documentation-link"].as<std::string>();
	}

	return data;
}
bool Program_Options::Build_And_Test() const{
return vm.count("build-and-test");}
bool Program_Options::Skip_Transfer() const{
return vm.count("skip-transfer");}