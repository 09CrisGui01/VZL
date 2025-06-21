# VZL 
![Development Status](https://img.shields.io/badge/Development%2520Status-Active-green?style=for-the-badge&logo=github&label=Status)
![Static Badge](https://img.shields.io/badge/Version-0.1.0--alpha-blue?style=for-the-badge)
<!--Introduction 50-100 words-->

## Table of Content
- [Modules](#modules)
- [Requirements](#requirements)
- [Installation](#installation)
- [Usage](#usage)
- [Support](#support)
- [Acknowledgment](#acknowledgment)
    - [Authors](#authors)
    - [Contributors](#contributors)
- [Security](#security)
- [Contributing](#contributing)
- [License](#license)

## Modules
| Name            | Description                            | Documentation |
|-----------------|----------------------------------------|---------------|
| `vzl-error`     | Declare, handle and catch errors.      |                |
| `vzl-structure` | Data structures implementations.       |                |
| `vzl-algorithm` | Algorithm to work with data structures.|                |
| `vzl-string`    | String implementation and handling.    |                |

## Requirements
> if you are using the docker version, no dependency is require.

This requirements are only necessary for running tests:

- `gcc` >= `15.1.0`

Optional dependency:
- `make` >= `4.4.0`

## Installation
1. Clone repository:
```bash
$ git clone -b release --single-branch https://codeberg.org/09CrisGui01/VZL --depth 2
```

2. Run the tests: 
    A. With `make`:
    ```bash
    $ make test
    ```
    B. Without `make`:
    ```bash
    $ gcc -o test ./test/all.c && ./test
    ```

3. Once checked that everything is allright, add the headers files (`*.h`) 
into your project as a dependency.

## Usage
Include the dependencies and enable its implementation:
```c
#define VZL_<HEADER_FILE>
#include "path/to/<HEADER_FILE>.h"
```

See more about the [modules](#modules) this library include.

## Security
If you have detected any security issue or you want to improve the security of
this project, please, read [The Security Guide](./documentation/SECURITY.md).

## Contributing
Checkout [The Contributing Guide](./documentation/CONTRIBUTING.md) document
to see how you can contribute to this project.

## License
This project is licensed under the [LGPLv3 license](./LICENSE.md) and its
documentation is under the [FDLv1.3 license](./documentation/LICENSE.md)
