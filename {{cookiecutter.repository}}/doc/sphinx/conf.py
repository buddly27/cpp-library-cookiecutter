# -*- coding: utf-8 -*-

"""{{ cookiecutter.project }} documentation build configuration file."""

import os
import re
import doxygen

# -- General ------------------------------------------------------------------

# Extensions.
extensions = ["lowdown"]

if os.environ.get("READTHEDOCS"):
    doxygen.create_cmake_config()
    doxygen.build()

    html_extra_path = ["./api"]

# The suffix of source filenames.
source_suffix = ".rst"

# The master toctree document.
master_doc = "index"

# General information about the project.
project = u"{{ cookiecutter.project }}"
copyright = u"{{ cookiecutter.year }}, {{ cookiecutter.author }}"

# Version
with open(
    os.path.join(
        os.path.dirname(__file__), "..", "..", "CMakeLists.txt",
    )
) as _version_file:
    _version = re.search(
        r"project\(.* VERSION ([\d\\.]+)", _version_file.read(), re.DOTALL
    ).group(1)

version = _version
release = _version

# -- HTML output --------------------------------------------------------------

html_theme = "sphinx_rtd_theme"

# If True, copy source rst files to output for reference.
html_copy_source = True
