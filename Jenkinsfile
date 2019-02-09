pipeline {
    agent any

    stages {
        stage('Build') {
            steps {
                echo 'Building...'
                sh 'cmake -H. -Bbuild -DCMAKE_INSTALL_PREFIX:PATH=/tmp/foo'
                sh 'cd build && cmake --build .'
            }
        }
        stage('Test') {
            steps {
                echo 'Testing...'
                sh 'ctest -V'
            }
        }
        stage('Deploy') {
            steps {
                echo 'Deploying...'
                sh 'cmake --build . --target install'
            }
        }
    }
}
