from setuptools import find_packages
from setuptools import setup

setup(
    name='clip_msgs',
    version='0.3.0',
    packages=find_packages(
        include=('clip_msgs', 'clip_msgs.*')),
)
