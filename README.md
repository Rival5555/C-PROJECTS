# C/C++ Projects

This repository contains various console-based management systems implemented in C/C++. These projects demonstrate fundamental programming concepts, data structures, file handling, and console UI development.

## Projects Overview

### 1. Hotel Management System
A console application for managing hotel operations including:
- Room booking and reservation tracking
- Guest check-in/check-out processing
- Room inventory management
- Billing and payment handling

### 2. Military Management System
A personnel and inventory management system for military operations featuring:
- Personnel data management and hierarchy
- Equipment and resource tracking
- Deployment scheduling
- Reporting and analytics

### 3. Car Rental Management System
A system to handle vehicle rental operations including:
- Vehicle inventory management
- Customer registration and history
- Rental booking and returns
- Billing and payment processing

### 4. Phone Book System
A digital contact management solution with:
- Contact storage and organization
- Search and filtering capabilities
- Contact data management
- Import/export functionality

### 5. Bank Management System
A banking operations management system featuring:
- Account creation and management
- Transaction processing
- Balance inquiries
- Statement generation

## Technical Requirements

- **Compiler**: GCC or any C/C++ compiler
- **Platform**: Windows/Linux/MacOS
- **Dependencies**: Standard C/C++ libraries only

## Build Instructions

### Windows
```
gcc -o project_name project_name.c
```
or
```
g++ -o project_name project_name.cpp
```

### Linux/MacOS
```
gcc -o project_name project_name.c
```
or
```
g++ -o project_name project_name.cpp -o project_name
```

## Running the Projects

After compiling, run the executable from the command line:
```
./project_name    # Linux/MacOS
project_name.exe  # Windows
```

## Project Structure

Each project follows a similar structure:
```
project_name/
├── src/              # Source code files
├── include/          # Header files
├── data/             # Data files (if applicable)
└── docs/             # Documentation
```

## Features Common to All Projects

- Text-based user interface
- File-based data persistence
- CRUD operations (Create, Read, Update, Delete)
- User authentication (where applicable)
- Error handling and input validation

## Contributing

1. Fork the repository
2. Create a feature branch (`git checkout -b feature/amazing-feature`)
3. Commit your changes (`git commit -m 'Add some amazing feature'`)
4. Push to the branch (`git push origin feature/amazing-feature`)
5. Open a Pull Request

## License

This project is licensed under the MIT License - see the LICENSE file for details.

## Acknowledgments

- These projects were developed as educational examples for C/C++ programming
- Thanks to all contributors who have helped improve these systems
