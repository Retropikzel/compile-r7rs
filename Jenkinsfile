pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Build") {
            agent { docker { image 'schemers/sagittarius'; args '--user=root' } }
            steps {
                sh 'apt-get update && apt-get install -y make libuv1'
                sh 'make'
                sh 'make install'
                sh 'make COMPILE_R7RS=sagittarius test-r6rs'
                sh 'make COMPILE_R7RS=sagittarius test-r7rs'
            }
        }
        stage("Test chez r6rs") {
            agent { docker { image 'schemers/chezscheme'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=chezscheme test-r6rs'
                }
            }
        }
        stage("Test chibi r7rs") {
            agent { docker { image 'schemers/chibi'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=chibi test-r7rs'
                }
            }
        }
        stage("Test cyclone r7rs") {
            agent { docker { image 'schemers/cyclone'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=cyclone test-r7rs'
                }
            }
        }
        stage("Test foment r7rs") {
            agent { docker { image 'schemers/foment'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=foment test-r7rs'
                }
            }
        }
        stage("Test gauche r7rs") {
            agent { docker { image 'schemers/gauche'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=gauche test-r7rs'
                }
            }
        }
        stage("Test guile r6rs") {
            agent { docker { image 'schemers/guile'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=guile test-r6rs'
                }
            }
        }
        stage("Test guile r7rs") {
            agent { docker { image 'schemers/guile'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=guile test-r7rs'
                }
            }
        }
        stage("Test ikarus r6rs") {
            agent { docker { image 'schemers/ikarus'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=ikarus test-r7rs'
                }
            }
        }
        stage("Test ironscheme r6rs") {
            agent { docker { image 'schemers/ironscheme'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=ironscheme test-r7rs'
                }
            }
        }
        stage("Test kawa r7rs") {
            agent { docker { image 'schemers/kawa'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=kawa test-r7rs'
                }
            }
        }
        stage("Test larceny r6rs") {
            agent { docker { image 'schemers/larceny'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=larceny test-r6rs'
                }
            }
        }
        stage("Test larceny r7rs") {
            agent { docker { image 'schemers/larceny'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=larceny test-r7rs'
                }
            }
        }
        stage("Test loko r6rs") {
            agent { docker { image 'schemers/loko'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=loko test-r6rs'
                }
            }
        }
        stage("Test loko r7rs") {
            agent { docker { image 'schemers/loko'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=loko test-r7rs'
                }
            }
        }
        stage("Test mit-scheme r7rs") {
            agent { docker { image 'schemers/mit-scheme'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=mit-scheme test-r7rs'
                }
            }
        }
        stage("Test mosh r6rs") {
            agent { docker { image 'schemers/mosh'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=mosh test-r6rs'
                }
            }
        }
        stage("Test mosh r7rs") {
            agent { docker { image 'schemers/mosh'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=mosh test-r7rs'
                }
            }
        }
        stage("Test sagittarius r6rs") {
            agent { docker { image 'schemers/sagittarius'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=sagittarius test-r6rs'
                }
            }
        }
        stage("Test sagittarius r7rs") {
            agent { docker { image 'schemers/sagittarius'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=sagittarius test-r7rs'
                }
            }
        }
        stage("Test skint r7rs") {
            agent { docker { image 'schemers/skint'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=skint test-r7rs'
                }
            }
        }
        stage("Test tr7 r7rs") {
            agent { docker { image 'schemers/tr7'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=tr7 test-r7rs'
                }
            }
        }
        stage("Test ypsilon r6rs") {
            agent { docker { image 'schemers/ypsilon'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=ypsilon test-r6rs'
                }
            }
        }
        stage("Test ypsilon r7rs") {
            agent { docker { image 'schemers/ypsilon'; args '--user=root' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh'apt-get update && apt-get install -y build-essential wget make cmake libgc-dev zlib1g-dev libffi-dev libssl-dev && wget https://bitbucket.org/ktakashi/sagittarius-scheme/downloads/sagittarius-0.9.12.tar.gz && tar -xf sagittarius-0.9.12.tar.gz && cd sagittarius-0.9.12 && mkdir build && cd build && cmake -DCMAKE_INSTALL_PREFIX=/usr/local-other .. && make && make install'
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make COMPILE_R7RS=ypsilon test-r7rs'
                }
            }
        }
    }
}
