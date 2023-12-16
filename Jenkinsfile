pipeline {
    agent {
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Hello world!'
            }
        }
        stage('My Post Action Stage') {
            post{
                steps{
                    always{
                        sh 'echo Azione post'
                    }
                }
            }
        }
    }
}
