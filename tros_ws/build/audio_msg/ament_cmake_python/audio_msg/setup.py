from setuptools import find_packages
from setuptools import setup

setup(
    name='audio_msg',
    version='2.0.1',
    packages=find_packages(
        include=('audio_msg', 'audio_msg.*')),
)
