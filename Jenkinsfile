pipeline {
    agent {
        dockerfile {
            filename 'Dockerfile.jenkins'
                args '--user=root -v /var/run/docker.sock:/var/run/docker.sock'
        }
    }
    options {
        disableConcurrentBuilds()
            buildDiscarder(logRotator(numToKeepStr: '10', artifactNumToKeepStr: '10'))
    }
    stages {

        stage("Get implementation lists") {
            steps {
                script {
                    r6rs_implementations = sh 'sash -L ./snow -L . compile-r7rs.scm --list-r6rs-schemes'
                    r7rs_implementations = sh 'sash -L ./snow -L . compile-r7rs.scm --list-r7rs-schemes'
                }
            }
        }

        stages {
            stage('Test R6RS implementations') {
                steps {
                    script {
                        r6rs_implementations.each { implementation->
                            stage("${implementation} ${test}") {
                                catchError(buildResult: 'SUCCESS', stageResult: 'FAILURE') {
                                    sh "make test-r6rs COMPILE_R7RS=${implementation}"
                                }
                            }
                        }
                    }
                }
            }
        }
    }
}
