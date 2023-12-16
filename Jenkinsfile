pipeline {
    agent{
        label 'docker'
    }
    stages {
        stage('Build') {
            steps {
                sh 'echo Hello world!'
            }
        }
    }
    post {
        always {
            stage('Final Stage') {
                steps {
                    // This stage will run regardless of the success or failure of previous stages
                    echo 'Hello world one last time!'
                }
            }
        }
    }
}
