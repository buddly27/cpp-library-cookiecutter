# -*- coding: utf-8 -*-

from cookiecutter.utils import simple_filter


@simple_filter
def camel_case(value, capitalize=True):
    """Convert *value* into Camel Case format.

    Example::

        >>> camel_case("This is a test")
        "thisIsATest"

        >>> camel_case("This is a test", capitalize=True)
        "ThisIsATest"

    """
    value = value.title().replace(' ', '')
    if capitalize:
        return value
    return value[0].lower() + value[1:]
