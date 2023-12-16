pipeline {
    agent {
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                script {
                    // Simulate a failure by using the 'error' step
                    error("This pipeline intentionally fails. Will My Post Action Stage execute?")
                }
            }
        }
        stage('My Post Action Stage') {
            steps{
                sh 'echo Hello world again!'
            }
            post{
                always{
                    sh 'echo Hello world one last time!'
                }
            }
        }
    }
}
