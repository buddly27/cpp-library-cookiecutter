# -*- coding: utf-8 -*-

"""{{ cookiecutter.project }} documentation build configuration file."""

# -- General ------------------------------------------------------------------

# Extensions.
extensions = [
    "sphinx.ext.extlinks",
    "sphinx.ext.intersphinx",
    "lowdown"
]

# The suffix of source filenames.
source_suffix = ".rst"

# The master toctree document.
master_doc = "index"

# General information about the project.
project = u"{{ cookiecutter.project }}"
copyright = u"{{ cookiecutter.year }}, {{ cookiecutter.author }}"

# -- HTML output --------------------------------------------------------------

html_theme = "sphinx_rtd_theme"

# If True, copy source rst files to output for reference.
html_copy_source = True

# -- Intersphinx --------------------------------------------------------------

intersphinx_mapping = {
    "python": ("http://docs.python.org/", None),
}
