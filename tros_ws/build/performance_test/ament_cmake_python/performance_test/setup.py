from setuptools import find_packages
from setuptools import setup

setup(
    name='performance_test',
    version='2.1.0',
    packages=find_packages(
        include=('performance_test', 'performance_test.*')),
)
