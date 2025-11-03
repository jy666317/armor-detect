from setuptools import find_packages
from setuptools import setup

setup(
    name='armor_interfaces',
    version='0.0.0',
    packages=find_packages(
        include=('armor_interfaces', 'armor_interfaces.*')),
)
