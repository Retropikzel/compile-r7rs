pipeline {
    agent any
    options {
        buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {
        stage("Build") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                sh 'make'
                sh 'make install'
                sh 'make test-r6rs'
                sh 'make test-r7rs'
            }
        }
        stage("Test chez r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=chezsceme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test chibi r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=chibi' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test cyclone r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=cyclone' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test foment r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=foment' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test gauche r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=gauche' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test guile r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=guile' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test guile r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=guile' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test ikarus r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=ikarus' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test ironscheme r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=ironscheme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test kawa r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=kawa' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test larceny r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=larceny' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test larceny r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=larceny' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test loko r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=loko' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test loko r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=loko' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test mit-scheme r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=mit-scheme' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test mosh r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=mosh' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test mosh r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=mosh' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test sagittarius r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'apt-get update && apt-get install -y make libuv1'
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test sagittarius r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=sagittarius' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test skint r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=skint' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test tr7 r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=tr7' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
        stage("Test ypsilon r6rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=ypsilon' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r6rs'
                }
            }
        }
        stage("Test ypsilon r7rs") {
            agent { dockerfile { filename 'Dockerfile'; args '--user=root --build-arg COMPILE_R7RS=ypsilon' } }
            steps {
                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                    sh 'make && make install'
                    sh 'make test-r7rs'
                }
            }
        }
    }
}
